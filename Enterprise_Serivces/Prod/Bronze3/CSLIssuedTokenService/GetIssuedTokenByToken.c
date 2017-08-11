GetIssuedTokenByToken()
{
	lr_start_transaction("IssuedTokenService_GetIssuedTokenByToken");

	web_service_call( "StepName=GetIssuedTokenByToken_101",
		"SOAPMethod=IssuedTokenService|BasicHttpBinding_IIssuedTokenService|GetIssuedTokenByToken",
		"ResponseParam=response",
		"Service=IssuedTokenService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483551605.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<Token>tokentest</Token>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("IssuedTokenService_GetIssuedTokenByToken", LR_AUTO);

	return 0;
}
