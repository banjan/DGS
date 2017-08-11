UpdateShippingAddress()
{
	lr_start_transaction("ReservationService_UpdateShippingAddress");

		web_service_call( "StepName=UpdateShippingAddress_101",
		"SOAPMethod=ReservationService|BasicHttpBinding_IReservationService|UpdateShippingAddress",
		"ResponseParam=response",
		"Service=ReservationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484168343.inf",
		BEGIN_ARGUMENTS,
		"xml:ShippingAddress="
			"<ShippingAddress nil=\"true\"></ShippingAddress>",
		"xml:MachineName="
			"<MachineName nil=\"true\"></MachineName>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("ReservationService_UpdateShippingAddress", LR_AUTO);

	return 0;
}
