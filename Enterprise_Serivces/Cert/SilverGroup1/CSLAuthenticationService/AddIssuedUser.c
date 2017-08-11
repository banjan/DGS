AddIssuedUser()
{
	lr_start_transaction("AuthenticationService_AddIssuedUser");

	web_service_call( "StepName=AddIssuedUser_101",
		"SOAPMethod=AuthenticationService|BasicHttpBinding_IAuthenticationService|AddIssuedUser",
		"ResponseParam=response",
		"Service=AuthenticationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484703382.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<Password>Passw0rd</Password>"
				"<User>"
					"<ClientID>0</ClientID>"
					"<CustomerID>123456789</CustomerID>"
					"<EmailAddress>IssuedUser{rndAppend}@gstop.com</EmailAddress>"
					"<EmailIsValid>true</EmailIsValid>"
					"<UserID>0</UserID>"
					"<UserName>IssuedUser{rndAppend}</UserName>"
				"</User>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("AuthenticationService_AddIssuedUser", LR_AUTO);

	
//	lr_xml_get_values("XML={response}",
//	                  "Query=/s:Envelope[1]/s:Body[1]/*/*/a:IssuedUser[1]/b:OpenIDClaimedIdentifierGUID[1]",
//	                  "ValueParam=ParamValue_OpenIDGUID",
//	                  LAST);
//
//	lr_xml_get_values("XML={response}",
//	                  "Query=/s:Envelope[1]/s:Body[1]/*/*/a:IssuedUser[1]/b:Password[1]",
//	                  "ValueParam=ParamValue_Password",
//	                  LAST);
	                  	
	return 0;
}
