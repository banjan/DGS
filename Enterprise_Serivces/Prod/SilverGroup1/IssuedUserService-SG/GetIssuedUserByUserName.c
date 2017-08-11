GetIssuedUserByUserName()
{
	web_service_call( "StepName=GetIssuedUserByUserName_101",
		"SOAPMethod=IssuedUserService_int_vs_v1.0|IssuedUserService_int_vs_v1.0.PortName|GetIssuedUserByUserName",
		"ResponseParam=response",
		"Service=IssuedUserService_int_vs_v1.0",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1487971397.inf",
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

	
	return 0;
}
