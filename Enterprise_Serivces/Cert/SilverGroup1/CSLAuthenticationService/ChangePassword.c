ChangePassword()
{
	lr_start_transaction("AuthenticationService_ChangePassword");

	web_service_call( "StepName=ChangePassword_101",
		"SOAPMethod=AuthenticationService|BasicHttpBinding_IAuthenticationService|ChangePassword",
		"ResponseParam=response",
		"Service=AuthenticationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484708134.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<NewPassword>q@1q2w3e4r5t6y7u8i</NewPassword>"
				"<OldPassword>Passw0rd</OldPassword>"
				"<OpenIDClaimedIdentifier>https://login.gamestop.com/id/F44CD92B-DEE3-4927-9BE4-10ECCED555E4</OpenIDClaimedIdentifier>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	web_service_call( "StepName=ChangeUserName_101",
		"SOAPMethod=AuthenticationService|BasicHttpBinding_IAuthenticationService|ChangeUserName",
		"ResponseParam=response",
		"Service=AuthenticationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484710604.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<ClientID>0</ClientID>"
				"<CurrentUserName>IssuedUser{rndAppend}</CurrentUserName>"
				"<NewUserName>NewIssuedUser{rndAppend}</NewUserName>"
				"<Password>Passw0rd</Password>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("AuthenticationService_ChangePassword", LR_AUTO);

	return 0;
}
