ActivateLoyaltyMembership()
{
	lr_start_transaction("LoyaltyMembershipService_ActivateLoyaltyMembership");

	web_service_call( "StepName=ActivateLoyaltyMembership_101",
		"SOAPMethod=LoyaltyMembershipService|BasicHttpBinding_ILoyaltyMembershipService|ActivateLoyaltyMembership",
		"ResponseParam=response",
		"Service=LoyaltyMembershipService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1499711284.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request nil=\"true\"></request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyMembershipService_ActivateLoyaltyMembership", LR_AUTO);

	return 0;
}
