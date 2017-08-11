RenewLoyaltyMembership()
{
	lr_start_transaction("LoyaltyMembershipService_RenewLoyaltyMembership");

	web_service_call( "StepName=RenewLoyaltyMembership_101",
		"SOAPMethod=LoyaltyMembershipService|BasicHttpBinding_ILoyaltyMembershipService|RenewLoyaltyMembership",
		"ResponseParam=response",
		"Service=LoyaltyMembershipService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1499711043.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request nil=\"true\"></request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyMembershipService_RenewLoyaltyMembership", LR_AUTO);

	return 0;
}
