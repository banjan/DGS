RemoveIssuedToken()
{
	lr_start_transaction("IssuedTokenService_RemoveIssuedToken");

	web_service_call( "StepName=RemoveIssuedToken_101",
		"SOAPMethod=IssuedTokenService|BasicHttpBinding_IIssuedTokenService|RemoveIssuedToken",
		"ResponseParam=response",
		"Service=IssuedTokenService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483552500.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<Token>test123</Token>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("IssuedTokenService_RemoveIssuedToken", LR_AUTO);

	return 0;
}
