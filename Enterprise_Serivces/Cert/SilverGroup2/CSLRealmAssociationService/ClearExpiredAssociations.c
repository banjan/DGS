ClearExpiredAssociations()
{
	lr_start_transaction("RealmAssociationService_ClearExpiredAssociations");

	web_service_call( "StepName=ClearExpiredAssociations_101",
		"SOAPMethod=RealmAssociationService|BasicHttpBinding_IRealmAssociationService|ClearExpiredAssociations",
		"ResponseParam=response",
		"Service=RealmAssociationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484780495.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<Days>1</Days>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmAssociationService_ClearExpiredAssociations", LR_AUTO);

	return 0;
}
