ChangeIssuedTokenByToken()
{
	lr_start_transaction("IssuedTokenService_ChangeIssuedTokenByToken");

	web_service_call( "StepName=ChangeIssuedTokenByToken_101",
		"SOAPMethod=IssuedTokenService|BasicHttpBinding_IIssuedTokenService|ChangeIssuedTokenByToken",
		"ResponseParam=response",
		"Service=IssuedTokenService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483547739.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CallbackUrl>http://test.com</CallbackUrl>"
				"<ExpirationDate>1999-05-31T13:20:00-05:00</ExpirationDate>"
				"<Secret>abcde</Secret>"
				"<Token>abcde</Token>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("IssuedTokenService_ChangeIssuedTokenByToken", LR_AUTO);

	return 0;
}
