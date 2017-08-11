UpgradeLoyaltyMembership()
{
	lr_start_transaction("LoyaltyMembershipService_UpgradeLoyaltyMembership");

	web_service_call( "StepName=UpgradeLoyaltyMembership_101",
		"SOAPMethod=LoyaltyMembershipService|BasicHttpBinding_ILoyaltyMembershipService|UpgradeLoyaltyMembership",
		"ResponseParam=response",
		"Service=LoyaltyMembershipService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1499711174.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request nil=\"true\"></request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyMembershipService_UpgradeLoyaltyMembership", LR_AUTO);

	return 0;
}
