RemoveAssociation()
{
	lr_start_transaction("RealmAssociationService_RemoveAssociation");

	web_service_call( "StepName=RemoveAssociation_101",
		"SOAPMethod=RealmAssociationService|BasicHttpBinding_IRealmAssociationService|RemoveAssociation",
		"ResponseParam=response",
		"Service=RealmAssociationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484782137.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<AssociationHandle>abcde</AssociationHandle>"
				"<DistinguishingFactor>abcde</DistinguishingFactor>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmAssociationService_RemoveAssociation", LR_AUTO);

	return 0;
}
