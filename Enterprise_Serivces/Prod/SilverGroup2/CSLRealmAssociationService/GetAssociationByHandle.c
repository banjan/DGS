GetAssociationByHandle()
{
	lr_start_transaction("RealmAssociationService_GetAssociationByHandle");

	web_service_call( "StepName=GetAssociationByHandle_101",
		"SOAPMethod=RealmAssociationService|BasicHttpBinding_IRealmAssociationService|GetAssociationByHandle",
		"ResponseParam=response",
		"Service=RealmAssociationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484780785.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<AssociationHandle>3</AssociationHandle>"
				"<DistinguishingFactor>4</DistinguishingFactor>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmAssociationService_GetAssociationByHandle", LR_AUTO);

	return 0;
}
