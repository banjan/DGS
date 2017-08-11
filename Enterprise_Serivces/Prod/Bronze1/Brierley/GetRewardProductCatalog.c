GetRewardProductCatalog()
{
	
	web_service_call( "StepName=GetRewardProductCatalog_102",
		"SOAPMethod=BrierleyService|BasicHttpBinding_IBrierleyService|GetRewardProductCatalog",
		"ResponseParam=response",
		"Service=BrierleyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482183204.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	return 0;
}
