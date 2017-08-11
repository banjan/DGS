MergeLoyaltyMembershipCards()
{
	lr_start_transaction("LoyaltyMembershipService_MergeLoyaltyMembershipCards");

	web_service_call( "StepName=MergeLoyaltyMembershipCards_101",
		"SOAPMethod=LoyaltyMembershipService|BasicHttpBinding_ILoyaltyMembershipService|MergeLoyaltyMembershipCards",
		"ResponseParam=response",
		"Service=LoyaltyMembershipService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1499704281.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request nil=\"true\"></request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyMembershipService_MergeLoyaltyMembershipCards", LR_AUTO);

	return 0;
}
