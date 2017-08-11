ChangeIssuedUserStatus()
{
	lr_start_transaction("AuthenticationService_ChangeIssuedUserStatus");

	web_service_call( "StepName=ChangeIssuedUserStatus_101",
		"SOAPMethod=AuthenticationService|BasicHttpBinding_IAuthenticationService|ChangeIssuedUserStatus",
		"ResponseParam=response",
		"Service=AuthenticationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484707097.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<UserName>john@yahoo.com</UserName>"
				"<UserStatus>Okay</UserStatus>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("AuthenticationService_ChangeIssuedUserStatus", LR_AUTO);

	return 0;
}
