IsServiceAlive()
{
	lr_start_transaction("IssuedUserService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_102",
		"SOAPMethod=IssuedUserService|BasicHttpBinding_IIssuedUserService|IsServiceAlive",
		"ResponseParam=response",
		"Service=IssuedUserService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484774560.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("IssuedUserService_IsServiceAlive", LR_AUTO);

	return 0;
}
