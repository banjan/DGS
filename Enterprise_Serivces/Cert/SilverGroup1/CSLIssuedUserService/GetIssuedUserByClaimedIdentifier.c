GetIssuedUserByClaimedIdentifier()
{
	lr_start_transaction("IssuedUserService_GetIssuedUserByClaimedIdentifier");

	web_service_call( "StepName=GetIssuedUserByClaimedIdentifier_101",
		"SOAPMethod=IssuedUserService|BasicHttpBinding_IIssuedUserService|GetIssuedUserByClaimedIdentifier",
		"ResponseParam=response",
		"Service=IssuedUserService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484773563.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<OpenIDClaimedIdentifier>https://loginprod.gamestop.com/ID/OnpyjoDlGECaSd6ZXESMdA</OpenIDClaimedIdentifier>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("IssuedUserService_GetIssuedUserByClaimedIdentifier", LR_AUTO);

	return 0;
}
