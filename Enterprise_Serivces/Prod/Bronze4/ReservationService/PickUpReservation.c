PickUpReservation()
{
	lr_start_transaction("ReservationService_PickUpReservation");

	web_service_call( "StepName=PickUpReservation_101",
		"SOAPMethod=ReservationService|BasicHttpBinding_IReservationService|PickUpReservation",
		"ResponseParam=response",
		"Service=ReservationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484168277.inf",
		BEGIN_ARGUMENTS,
		"PickUpDateSpecified=",
		"xml:MachineName="
			"<MachineName nil=\"true\"></MachineName>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ReservationService_PickUpReservation", LR_AUTO);

	return 0;
}
