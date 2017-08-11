RetrievePartnerInventoryThresholds()
{
	lr_start_transaction("AllSparkCSRChannel_RetrievePartnerInventoryThresholds");

	web_service_call( "StepName=RetrievePartnerInventoryThresholds_101",
		"SOAPMethod=AllSparkAgentService|BasicHttpBinding_IAllSparkAgentService|RetrievePartnerInventoryThresholds",
		"ResponseParam=response",
		"Service=AllSparkAgentService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1487643696.inf",
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

	lr_end_transaction("AllSparkCSRChannel_RetrievePartnerInventoryThresholds", LR_AUTO);

	return 0;
}
