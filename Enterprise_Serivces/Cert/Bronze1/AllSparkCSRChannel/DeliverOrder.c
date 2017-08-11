DeliverOrder()
{
	lr_start_transaction("AllSparkCSRChannel_DeliverOrder");

	web_service_call( "StepName=DeliverOrder_101",
		"SOAPMethod=AllSparkAgentService|BasicHttpBinding_IAllSparkAgentService|DeliverOrder",
		"ResponseParam=response",
		"Service=AllSparkAgentService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1487642765.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<PartnerKey>TEST-US</PartnerKey>"
				"<OrderRequestGUID>9d997eb9-0378-41ea-9a23-784e2c84f6fe</OrderRequestGUID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("AllSparkCSRChannel_DeliverOrder", LR_AUTO);

	return 0;
}
