IsServiceHealthy()
{
	
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
