StoreAssociation()
{
	
	lr_start_transaction("AssociationService_StoreAssociation");

		web_service_call( "StepName=StoreAssociation_101",
		"SOAPMethod=AssociationService|BasicHttpBinding_IAssociationService|StoreAssociation",
		"ResponseParam=response",
		"Service=AssociationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482357022.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<AssociationHandle>test</AssociationHandle>"
				"<DistinguishingFactor>test</DistinguishingFactor>"
				"<Expires>2018-02-21 00:00:00.000</Expires>"
				"<PrivateData base64Mode=\"encoded\">test</PrivateData>"
				"<PrivateDataLength>62</PrivateDataLength>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("AssociationService_StoreAssociation", LR_AUTO);

	return 0;
}
