IsServiceHealthy()
{
	lr_start_transaction("AuthenticationService_IsServiceHealthy");
	
	web_service_call( "StepName=IsServiceHealthy_101",
		"SOAPMethod=AuthenticationService|BasicHttpBinding_IAuthenticationService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=AuthenticationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484772955.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("AuthenticationService_IsServiceHealthy", LR_AUTO);

	return 0;
}
