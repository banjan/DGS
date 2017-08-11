GetVersion()
{
	lr_start_transaction("IssuedTokenService_GetVersion");

	web_service_call( "StepName=GetVersion_102",
		"SOAPMethod=IssuedTokenService|BasicHttpBinding_IIssuedTokenService|GetVersion",
		"ResponseParam=response",
		"Service=IssuedTokenService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483552880.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("IssuedTokenService_GetVersion", LR_AUTO);

	return 0;
}
