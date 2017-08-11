RetrieveReadyToDeliverOrders()
{
	lr_start_transaction("AllSparkCSRChannel_RetrieveReadyToDeliverOrders");

	web_service_call( "StepName=RetrieveReadyToDeliverOrders_101",
		"SOAPMethod=AllSparkAgentService|BasicHttpBinding_IAllSparkAgentService|RetrieveReadyToDeliverOrders",
		"ResponseParam=response",
		"Service=AllSparkAgentService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1487642286.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<PartnerKey>TEST-US</PartnerKey>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("AllSparkCSRChannel_RetrieveReadyToDeliverOrders", LR_AUTO);

	return 0;
}
