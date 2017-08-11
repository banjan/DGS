Action()
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

	web_service_call( "StepName=GetVersion_101",
		"SOAPMethod=BrierleyService|BasicHttpBinding_IBrierleyService|GetVersion",
		"ResponseParam=response",
		"Service=BrierleyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482183537.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	web_service_call( "StepName=IsServiceAlive_101",
		"SOAPMethod=BrierleyService|BasicHttpBinding_IBrierleyService|IsServiceAlive",
		"ResponseParam=response",
		"Service=BrierleyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482183553.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	web_service_call( "StepName=IsServiceHealthy_101",
		"SOAPMethod=BrierleyService|BasicHttpBinding_IBrierleyService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=BrierleyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482183569.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	return 0;
}
