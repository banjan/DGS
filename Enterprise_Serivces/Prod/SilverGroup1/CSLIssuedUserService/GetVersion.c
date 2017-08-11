GetVersion()
{
	lr_start_transaction("IssuedUserService_GetVersion");

	web_service_call( "StepName=GetVersion_102",
		"SOAPMethod=IssuedUserService|BasicHttpBinding_IIssuedUserService|GetVersion",
		"ResponseParam=response",
		"Service=IssuedUserService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484774498.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("IssuedUserService_GetVersion", LR_AUTO);

	return 0;
}
