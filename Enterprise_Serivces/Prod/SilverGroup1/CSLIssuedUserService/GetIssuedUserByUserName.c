GetIssuedUserByUserName()
{
	lr_start_transaction("IssuedUserService_GetIssuedUserByUserName");

	web_service_call( "StepName=GetIssuedUserByUserName_101",
		"SOAPMethod=IssuedUserService|BasicHttpBinding_IIssuedUserService|GetIssuedUserByUserName",
		"ResponseParam=response",
		"Service=IssuedUserService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484773901.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<ClientID>0</ClientID>"
				"<UserName>username</UserName>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("IssuedUserService_GetIssuedUserByUserName", LR_AUTO);

	return 0;
}
