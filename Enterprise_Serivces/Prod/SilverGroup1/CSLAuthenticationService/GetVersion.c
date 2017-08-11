GetVersion()
{
	lr_start_transaction("AuthenticationService_GetVersion");

	web_service_call( "StepName=GetVersion_101",
		"SOAPMethod=AuthenticationService|BasicHttpBinding_IAuthenticationService|GetVersion",
		"ResponseParam=response",
		"Service=AuthenticationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484772788.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("AuthenticationService_GetVersion", LR_AUTO);

	return 0;
}
