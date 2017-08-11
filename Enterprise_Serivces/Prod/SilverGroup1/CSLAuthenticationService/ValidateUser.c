ValidateUser()
{
	lr_start_transaction("AuthenticationService_ValidateUser");

	web_service_call( "StepName=ValidateUser_101",
		"SOAPMethod=AuthenticationService|BasicHttpBinding_IAuthenticationService|ValidateUser",
		"ResponseParam=response",
		"Service=AuthenticationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1487280848.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<ClientID>0</ClientID>"
				"<Password>Passw0rd</Password>"
				"<UserName>LRfbvAUb0UO6URa1HLW1sQ@gs.com</UserName>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("AuthenticationService_ValidateUser", LR_AUTO);

	return 0;
}
