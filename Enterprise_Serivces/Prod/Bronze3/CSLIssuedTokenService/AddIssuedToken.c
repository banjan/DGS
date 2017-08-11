AddIssuedToken()
{
	lr_start_transaction("IssuedTokenService_AddIssuedToken");

	web_service_call( "StepName=AddIssuedToken_101",
		"SOAPMethod=IssuedTokenService|BasicHttpBinding_IIssuedTokenService|AddIssuedToken",
		"ResponseParam=response",
		"Service=IssuedTokenService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483547371.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CallbackUrl>http://qa.gamestop.com</CallbackUrl>"
				"<ClientID>1</ClientID>"
				"<IsAccessToken>true</IsAccessToken>"
				"<Scopes>"
					"<string>testscope</string>"
				"</Scopes>"
				"<Secret>secret</Secret>"
				"<Token>tokentest</Token>"
				"<VerificationCode>verification</VerificationCode>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("IssuedTokenService_AddIssuedToken", LR_AUTO);

	return 0;
}
