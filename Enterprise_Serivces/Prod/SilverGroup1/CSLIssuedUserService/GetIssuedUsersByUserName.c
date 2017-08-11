GetIssuedUsersByUserName()
{
	lr_start_transaction("IssuedUserService_GetIssuedUsersByUserName");

	web_service_call( "StepName=GetIssuedUsersByUserName_101",
		"SOAPMethod=IssuedUserService|BasicHttpBinding_IIssuedUserService|GetIssuedUsersByUserName",
		"ResponseParam=response",
		"Service=IssuedUserService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484774387.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<UserName>username</UserName>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("IssuedUserService_GetIssuedUsersByUserName", LR_AUTO);

	return 0;
}
