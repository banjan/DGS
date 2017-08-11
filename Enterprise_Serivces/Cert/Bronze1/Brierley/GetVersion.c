GetVersion()
{
	
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
	
	return 0;
}
