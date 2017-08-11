IsServiceAlive()
{
	
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
	
	return 0;
}
