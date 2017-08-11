GetRealmUserByClaimedIdentifier()
{
	lr_start_transaction("RealmUserService_GetRealmUserByClaimedIdentifier");

	web_service_call( "StepName=GetRealmUserByClaimedIdentifier_101",
		"SOAPMethod=RealmUserService|BasicHttpBinding_IRealmUserService|GetRealmUserByClaimedIdentifier",
		"ResponseParam=response",
		"Service=RealmUserService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485795704.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<OpenIDClaimedIdentifier>https://login.gamestop.com/ID/ZNiXwOAp9EqaRN6DGq5s2g</OpenIDClaimedIdentifier>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmUserService_GetRealmUserByClaimedIdentifier", LR_AUTO);

	return 0;
}
