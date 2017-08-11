IsServiceAlive()
{
	lr_start_transaction("IssuedTokenService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_102",
		"SOAPMethod=IssuedTokenService|BasicHttpBinding_IIssuedTokenService|IsServiceAlive",
		"ResponseParam=response",
		"Service=IssuedTokenService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483552940.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("IssuedTokenService_IsServiceAlive", LR_AUTO);

	return 0;
}
