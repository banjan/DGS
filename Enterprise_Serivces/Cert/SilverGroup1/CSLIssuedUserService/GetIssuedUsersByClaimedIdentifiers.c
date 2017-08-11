GetIssuedUsersByClaimedIdentifiers()
{
	web_service_call( "StepName=GetIssuedUsersByClaimedIdentifiers_101",
		"SOAPMethod=IssuedUserService|BasicHttpBinding_IIssuedUserService|GetIssuedUsersByClaimedIdentifiers",
		"ResponseParam=response",
		"Service=IssuedUserService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484774169.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<OpenIDClaimedIdentifiers>"
					"<string>https://loginprod.gamestop.com/ID/OnpyjoDlGECaSd6ZXESMdA</string>"
					"<string>https://loginprod.gamestop.com/ID/cdtdlblbUEG-1zCN6skOwA</string>"
				"</OpenIDClaimedIdentifiers>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	
	return 0;
}
