StoreAssociation()
{
	lr_start_transaction("RealmAssociationService_StoreAssociation");

	web_service_call( "StepName=StoreAssociation_101",
		"SOAPMethod=RealmAssociationService|BasicHttpBinding_IRealmAssociationService|StoreAssociation",
		"ResponseParam=response",
		"Service=RealmAssociationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484782175.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<AssociationHandle>test</AssociationHandle>"
				"<DistinguishingFactor>test</DistinguishingFactor>"
				"<Expires>2018-02-21 00:00:00.000</Expires>"
				"<PrivateData base64Mode=\"encoded\">dGVzdA==</PrivateData>"
				"<PrivateDataLength>62</PrivateDataLength>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmAssociationService_StoreAssociation", LR_AUTO);

	return 0;
}
