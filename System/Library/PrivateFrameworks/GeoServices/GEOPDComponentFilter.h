//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDAboutFilter, GEOPDActionDataFilter, GEOPDAddressFilter, GEOPDAddressObjectFilter, GEOPDAmenitiesFilter, GEOPDAnnotatedItemListFilter, GEOPDAssociatedAppFilter, GEOPDBoundsFilter, GEOPDBrowseCategoriesFilter, GEOPDBusinessClaimFilter, GEOPDBusinessHoursFilter, GEOPDCaptionedPhotoFilter, GEOPDCategorizedPhotosFilter, GEOPDCollectionIdsFilter, GEOPDContainedPlaceFilter, GEOPDContainmentPlaceFilter, GEOPDETAFilter, GEOPDEnhancedPlacementFilter, GEOPDEnrichmentDataFilter, GEOPDEnrichmentInfoFilter, GEOPDEntityFilter, GEOPDExploreGuidesFilter, GEOPDExternalActionFilter, GEOPDFactoidFilter, GEOPDFlyoverFilter, GEOPDGuideGroupFilter, GEOPDHoursFilter, GEOPDISO3166CodeFilter, GEOPDIconFilter, GEOPDLabelGeometryFilter, GEOPDLinkedServiceFilter, GEOPDLocationEventFilter, GEOPDMessageLinkFilter, GEOPDPOIClaimFilter, GEOPDPhotoFilter, GEOPDPlaceCollectionFilter, GEOPDPlaceCollectionItemFilter, GEOPDPlaceInfoFilter, GEOPDPlaceQuestionnaireFilter, GEOPDPlacecardLayoutConfigurationFilter, GEOPDPlacecardURLFilter, GEOPDPoiEventFilter, GEOPDPriceDescriptionFilter, GEOPDPrototypeContainerFilter, GEOPDPublisherFilter, GEOPDQuickLinkFilter, GEOPDRapFilter, GEOPDRatingFilter, GEOPDRawAttributeFilter, GEOPDRelatedPlaceFilter, GEOPDRestaurantReservationLinkFilter, GEOPDResultSnippetFilter, GEOPDReviewFilter, GEOPDRoadAccessInfoFilter, GEOPDSimpleRestaurantMenuTextFilter, GEOPDSpatialLookupFilter, GEOPDStyleAttributesFilter, GEOPDTemplatePlaceFilter, GEOPDTextBlockFilter, GEOPDTipFilter, GEOPDTransitAttributionFilter, GEOPDTransitIncidentFilter, GEOPDTransitInfoFilter, GEOPDTransitInfoSnippetFilter, GEOPDTransitPaymentMethodInfoFilter, GEOPDTransitScheduleFilter, GEOPDTransitTripGeometryFilter, GEOPDTransitTripStopFilter, GEOPDTransitTripStopTimeFilter, GEOPDVehiclePositionFilter, GEOPDVendorAmenitiesFilter, GEOPDVenueInfoFilter, GEOPDWalletCategoryInformationFilter, GEOPDWifiFingerprintFilter, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDComponentFilter : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDAboutFilter *_aboutFilter;	// 24 = 0x18
    GEOPDRoadAccessInfoFilter *_accessInfoFilter;	// 32 = 0x20
    GEOPDActionDataFilter *_actionDataFilter;	// 40 = 0x28
    GEOPDAddressFilter *_addressFilter;	// 48 = 0x30
    GEOPDAddressObjectFilter *_addressObjectFilter;	// 56 = 0x38
    GEOPDAmenitiesFilter *_amenitiesFilter;	// 64 = 0x40
    GEOPDAnnotatedItemListFilter *_annotatedItemListFilter;	// 72 = 0x48
    GEOPDAssociatedAppFilter *_associatedAppFilter;	// 80 = 0x50
    GEOPDBoundsFilter *_boundsFilter;	// 88 = 0x58
    GEOPDBrowseCategoriesFilter *_browseCategoriesFilter;	// 96 = 0x60
    GEOPDBusinessClaimFilter *_businessClaimFilter;	// 104 = 0x68
    GEOPDBusinessHoursFilter *_businessHoursFilter;	// 112 = 0x70
    GEOPDCaptionedPhotoFilter *_captionedPhotoFilter;	// 120 = 0x78
    GEOPDCategorizedPhotosFilter *_categorizedPhotosFilter;	// 128 = 0x80
    GEOPDCollectionIdsFilter *_collectionIdsFilter;	// 136 = 0x88
    GEOPDContainedPlaceFilter *_containedPlaceFilter;	// 144 = 0x90
    GEOPDContainmentPlaceFilter *_containmentPlaceFilter;	// 152 = 0x98
    GEOPDEnhancedPlacementFilter *_enhancedPlacementFilter;	// 160 = 0xa0
    GEOPDEnrichmentDataFilter *_enrichmentDataFilter;	// 168 = 0xa8
    GEOPDEnrichmentInfoFilter *_enrichmentInfoFilter;	// 176 = 0xb0
    GEOPDEntityFilter *_entityFilter;	// 184 = 0xb8
    GEOPDETAFilter *_etaFilter;	// 192 = 0xc0
    GEOPDExploreGuidesFilter *_exploreGuidesFilter;	// 200 = 0xc8
    GEOPDExternalActionFilter *_externalActionFilter;	// 208 = 0xd0
    GEOPDFactoidFilter *_factoidFilter;	// 216 = 0xd8
    GEOPDFlyoverFilter *_flyoverFilter;	// 224 = 0xe0
    GEOPDGuideGroupFilter *_guideGroupFilter;	// 232 = 0xe8
    GEOPDHoursFilter *_hoursFilter;	// 240 = 0xf0
    GEOPDIconFilter *_iconFilter;	// 248 = 0xf8
    GEOPDISO3166CodeFilter *_iso3166CodeFilter;	// 256 = 0x100
    GEOPDLabelGeometryFilter *_labelGeometryFilter;	// 264 = 0x108
    GEOPDLinkedServiceFilter *_linkedServiceFilter;	// 272 = 0x110
    GEOPDLocationEventFilter *_locationEventFilter;	// 280 = 0x118
    GEOPDMessageLinkFilter *_messageLinkFilter;	// 288 = 0x120
    GEOPDPhotoFilter *_photoFilter;	// 296 = 0x128
    GEOPDPlaceCollectionFilter *_placeCollectionFilter;	// 304 = 0x130
    GEOPDPlaceCollectionItemFilter *_placeCollectionItemFilter;	// 312 = 0x138
    GEOPDPlaceInfoFilter *_placeInfoFilter;	// 320 = 0x140
    GEOPDPlaceQuestionnaireFilter *_placeQuestionnaireFilter;	// 328 = 0x148
    GEOPDPlacecardLayoutConfigurationFilter *_placecardLayoutConfigurationFilter;	// 336 = 0x150
    GEOPDPlacecardURLFilter *_placecardUrlFilter;	// 344 = 0x158
    GEOPDPOIClaimFilter *_poiClaimFilter;	// 352 = 0x160
    GEOPDPoiEventFilter *_poiEventFilter;	// 360 = 0x168
    GEOPDPriceDescriptionFilter *_priceDescriptionFilter;	// 368 = 0x170
    GEOPDPrototypeContainerFilter *_protoTypeContainerFilter;	// 376 = 0x178
    GEOPDPublisherFilter *_publisherFilter;	// 384 = 0x180
    GEOPDQuickLinkFilter *_quickLinkFilter;	// 392 = 0x188
    GEOPDRapFilter *_rapFilter;	// 400 = 0x190
    GEOPDRatingFilter *_ratingFilter;	// 408 = 0x198
    GEOPDRawAttributeFilter *_rawAttributeFilter;	// 416 = 0x1a0
    GEOPDRelatedPlaceFilter *_relatedPlaceFilter;	// 424 = 0x1a8
    GEOPDRestaurantReservationLinkFilter *_restaurantReservationLinkFilter;	// 432 = 0x1b0
    GEOPDResultSnippetFilter *_resultSnippetFilter;	// 440 = 0x1b8
    GEOPDReviewFilter *_reviewFilter;	// 448 = 0x1c0
    GEOPDSimpleRestaurantMenuTextFilter *_simpleRestaurantMenuTextFilter;	// 456 = 0x1c8
    GEOPDSpatialLookupFilter *_spatialLookupFilter;	// 464 = 0x1d0
    GEOPDStyleAttributesFilter *_styleAttributesFilter;	// 472 = 0x1d8
    GEOPDTemplatePlaceFilter *_templatePlaceFilter;	// 480 = 0x1e0
    GEOPDTextBlockFilter *_textBlockFilter;	// 488 = 0x1e8
    GEOPDTipFilter *_tipFilter;	// 496 = 0x1f0
    GEOPDTransitAttributionFilter *_transitAttributionFilter;	// 504 = 0x1f8
    GEOPDTransitIncidentFilter *_transitIncidentFilter;	// 512 = 0x200
    GEOPDTransitInfoFilter *_transitInfoFilter;	// 520 = 0x208
    GEOPDTransitInfoSnippetFilter *_transitInfoSnippetFilter;	// 528 = 0x210
    GEOPDTransitPaymentMethodInfoFilter *_transitPaymentMethodInfoFilter;	// 536 = 0x218
    GEOPDTransitScheduleFilter *_transitScheduleFilter;	// 544 = 0x220
    GEOPDTransitTripGeometryFilter *_transitTripGeometryFilter;	// 552 = 0x228
    GEOPDTransitTripStopFilter *_transitTripStopFilter;	// 560 = 0x230
    GEOPDTransitTripStopTimeFilter *_transitTripStopTimeFilter;	// 568 = 0x238
    GEOPDVehiclePositionFilter *_transitVehiclePositionFilter;	// 576 = 0x240
    GEOPDVendorAmenitiesFilter *_vendorAmenitiesFilter;	// 584 = 0x248
    GEOPDVenueInfoFilter *_venueInfoFilter;	// 592 = 0x250
    GEOPDWalletCategoryInformationFilter *_walletCategoryInformationFilter;	// 600 = 0x258
    GEOPDWifiFingerprintFilter *_wifiFingerprintFilter;	// 608 = 0x260
    unsigned int _readerMarkPos;	// 616 = 0x268
    unsigned int _readerMarkLength;	// 620 = 0x26c
    struct os_unfair_lock_s _readerLock;	// 624 = 0x270
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_aboutFilter:1;
        unsigned int read_accessInfoFilter:1;
        unsigned int read_actionDataFilter:1;
        unsigned int read_addressFilter:1;
        unsigned int read_addressObjectFilter:1;
        unsigned int read_amenitiesFilter:1;
        unsigned int read_annotatedItemListFilter:1;
        unsigned int read_associatedAppFilter:1;
        unsigned int read_boundsFilter:1;
        unsigned int read_browseCategoriesFilter:1;
        unsigned int read_businessClaimFilter:1;
        unsigned int read_businessHoursFilter:1;
        unsigned int read_captionedPhotoFilter:1;
        unsigned int read_categorizedPhotosFilter:1;
        unsigned int read_collectionIdsFilter:1;
        unsigned int read_containedPlaceFilter:1;
        unsigned int read_containmentPlaceFilter:1;
        unsigned int read_enhancedPlacementFilter:1;
        unsigned int read_enrichmentDataFilter:1;
        unsigned int read_enrichmentInfoFilter:1;
        unsigned int read_entityFilter:1;
        unsigned int read_etaFilter:1;
        unsigned int read_exploreGuidesFilter:1;
        unsigned int read_externalActionFilter:1;
        unsigned int read_factoidFilter:1;
        unsigned int read_flyoverFilter:1;
        unsigned int read_guideGroupFilter:1;
        unsigned int read_hoursFilter:1;
        unsigned int read_iconFilter:1;
        unsigned int read_iso3166CodeFilter:1;
        unsigned int read_labelGeometryFilter:1;
        unsigned int read_linkedServiceFilter:1;
        unsigned int read_locationEventFilter:1;
        unsigned int read_messageLinkFilter:1;
        unsigned int read_photoFilter:1;
        unsigned int read_placeCollectionFilter:1;
        unsigned int read_placeCollectionItemFilter:1;
        unsigned int read_placeInfoFilter:1;
        unsigned int read_placeQuestionnaireFilter:1;
        unsigned int read_placecardLayoutConfigurationFilter:1;
        unsigned int read_placecardUrlFilter:1;
        unsigned int read_poiClaimFilter:1;
        unsigned int read_poiEventFilter:1;
        unsigned int read_priceDescriptionFilter:1;
        unsigned int read_protoTypeContainerFilter:1;
        unsigned int read_publisherFilter:1;
        unsigned int read_quickLinkFilter:1;
        unsigned int read_rapFilter:1;
        unsigned int read_ratingFilter:1;
        unsigned int read_rawAttributeFilter:1;
        unsigned int read_relatedPlaceFilter:1;
        unsigned int read_restaurantReservationLinkFilter:1;
        unsigned int read_resultSnippetFilter:1;
        unsigned int read_reviewFilter:1;
        unsigned int read_simpleRestaurantMenuTextFilter:1;
        unsigned int read_spatialLookupFilter:1;
        unsigned int read_styleAttributesFilter:1;
        unsigned int read_templatePlaceFilter:1;
        unsigned int read_textBlockFilter:1;
        unsigned int read_tipFilter:1;
        unsigned int read_transitAttributionFilter:1;
        unsigned int read_transitIncidentFilter:1;
        unsigned int read_transitInfoFilter:1;
        unsigned int read_transitInfoSnippetFilter:1;
        unsigned int read_transitPaymentMethodInfoFilter:1;
        unsigned int read_transitScheduleFilter:1;
        unsigned int read_transitTripGeometryFilter:1;
        unsigned int read_transitTripStopFilter:1;
        unsigned int read_transitTripStopTimeFilter:1;
        unsigned int read_transitVehiclePositionFilter:1;
        unsigned int read_vendorAmenitiesFilter:1;
        unsigned int read_venueInfoFilter:1;
        unsigned int read_walletCategoryInformationFilter:1;
        unsigned int read_wifiFingerprintFilter:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 628 = 0x274
}

- (void).cxx_destruct;	// IMP=0x0000000000bb767d
- (unsigned long long)hash;	// IMP=0x0000000000bb5be7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bb4c69
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bb3f30
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bb316b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bb315c
- (id)jsonRepresentation;	// IMP=0x0000000000b9d594
- (id)dictionaryRepresentation;	// IMP=0x0000000000b97ee7
- (id)description;	// IMP=0x0000000000b97e38
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b92a49
- (id)init;	// IMP=0x0000000000b929ed
- (id)initAddressObjectFilterWithLibraryVersion:(id)arg1;	// IMP=0x000000000137fd86
- (id)initTransitTripStopTimeFilterWithTraits:(id)arg1;	// IMP=0x000000000137fad5
- (id)initTransitScheduleFilterWithTraits:(id)arg1;	// IMP=0x000000000137f824
- (id)initTipUserPhotoFilterWithTraits:(id)arg1;	// IMP=0x000000000137f5e9
- (id)initReviewUserPhotoFilterWithTraits:(id)arg1;	// IMP=0x000000000137f390
- (id)initResultSnippetFilterWithTraits:(id)arg1;	// IMP=0x000000000137f206
- (id)initRestaurantReservationLinkFilterWithTraits:(id)arg1;	// IMP=0x000000000137f191
- (id)initAnnotatedItemListFilterWithTraits:(id)arg1;	// IMP=0x000000000137ef56
- (id)initCaptionedPhotoFilterWithTraits:(id)arg1;	// IMP=0x000000000137ed1b
- (id)initPhotoFilterWithTraits:(id)arg1;	// IMP=0x000000000137eae0
- (id)initEntityFilterWithSpokenNames;	// IMP=0x000000000137ea50

@end

