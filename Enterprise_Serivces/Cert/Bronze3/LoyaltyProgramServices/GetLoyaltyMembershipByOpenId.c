GetLoyaltyMembershipByOpenId()
{
	lr_start_transaction("LoyaltyMembershipService_GetLoyaltyMembershipByOpenId");

	web_service_call( "StepName=GetLoyaltyMembershipByOpenId_101",
		"SOAPMethod=LoyaltyMembershipService|BasicHttpBinding_ILoyaltyMembershipService|GetLoyaltyMembershipByOpenId",
		"ResponseParam=response",
		"Service=LoyaltyMembershipService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1499711225.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<OpenIdClaimedIdentifier>abc123</OpenIdClaimedIdentifier>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyMembershipService_GetLoyaltyMembershipByOpenId", LR_AUTO);

	return 0;
}
