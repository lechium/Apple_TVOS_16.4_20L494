//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface WebAccessibilityObjectWrapper
{
    int m_isAccessibilityElement;	// 24 = 0x18
    unsigned long long m_accessibilityTraitsFromAncestor;	// 32 = 0x20
}

- (id)description;	// IMP=0x00000000002a6850
- (struct CGPoint)accessibilityClickPoint;	// IMP=0x00000000002a6820
- (id)accessibilityMathType;	// IMP=0x00000000002a6520
- (long long)accessibilityMathLineThickness;	// IMP=0x00000000002a64d0
- (_Bool)accessibilityIsMathTopObject;	// IMP=0x00000000002a6480
- (id)accessibilityMathFencedCloseString;	// IMP=0x00000000002a63c0
- (id)accessibilityMathFencedOpenString;	// IMP=0x00000000002a6300
- (id)accessibilityMathPrescripts;	// IMP=0x00000000002a62c0
- (id)accessibilityMathPostscripts;	// IMP=0x00000000002a6280
- (id)accessibilityPlatformMathSuperscriptKey;	// IMP=0x00000000002a6270
- (id)accessibilityPlatformMathSubscriptKey;	// IMP=0x00000000002a6260
- (id)accessibilityMathOverObject;	// IMP=0x00000000002a61f0
- (id)accessibilityMathUnderObject;	// IMP=0x00000000002a6180
- (id)accessibilityMathSuperscriptObject;	// IMP=0x00000000002a6110
- (id)accessibilityMathSubscriptObject;	// IMP=0x00000000002a60a0
- (id)accessibilityMathBaseObject;	// IMP=0x00000000002a6030
- (id)accessibilityMathDenominatorObject;	// IMP=0x00000000002a5fc0
- (id)accessibilityMathNumeratorObject;	// IMP=0x00000000002a5f50
- (id)accessibilityMathRadicand;	// IMP=0x00000000002a5e40
- (id)accessibilityMathRootIndexObject;	// IMP=0x00000000002a5dd0
- (id)accessibilitySortDirection;	// IMP=0x00000000002a5d60
- (id)accessibilityCurrentState;	// IMP=0x00000000002a5c10
- (id)accessibilityInvalidStatus;	// IMP=0x00000000002a5b50
- (_Bool)accessibilityIsShowingValidationMessage;	// IMP=0x00000000002a5b00
- (_Bool)accessibilityIsExpanded;	// IMP=0x00000000002a5a60
- (_Bool)accessibilitySupportsARIAExpanded;	// IMP=0x00000000002a59c0
- (_Bool)accessibilityIsPressed;	// IMP=0x00000000002a5970
- (_Bool)accessibilitySupportsARIAPressed;	// IMP=0x00000000002a5920
- (_Bool)accessibilityARIALiveRegionIsAtomic;	// IMP=0x00000000002a58d0
- (id)accessibilityARIARelevantStatus;	// IMP=0x00000000002a5810
- (id)accessibilityARIALiveRegionStatus;	// IMP=0x00000000002a5750
- (_Bool)accessibilityARIAIsBusy;	// IMP=0x00000000002a5700
- (id)accessibilitySpeechHint;	// IMP=0x00000000002a56c0
- (_Bool)accessibilityIsMarkAnnotation;	// IMP=0x00000000002a5520
- (_Bool)accessibilityIsLastItemInSuggestion;	// IMP=0x00000000002a5430
- (_Bool)accessibilityIsFirstItemInSuggestion;	// IMP=0x00000000002a5370
- (_Bool)accessibilityIsDeletion;	// IMP=0x00000000002a52f0
- (_Bool)accessibilityIsInsertion;	// IMP=0x00000000002a5270
- (id)accessibilityIdentifier;	// IMP=0x00000000002a51b0
- (id)accessibilityExpandedTextValue;	// IMP=0x00000000002a50f0
- (id)textMarkersForRange:(const void *)arg1;	// IMP=0x00000000002a4fe0
- (id)textMarkerRangeForMarkers:(id)arg1;	// IMP=0x00000000002a4eb0
- (id)startOrEndTextMarkerForTextMarkers:(id)arg1 isStart:(_Bool)arg2;	// IMP=0x00000000002a4d50
- (long long)lengthForTextMarkers:(id)arg1;	// IMP=0x00000000002a4a90
- (optional_8a7f6590)rangeForTextMarkers:(id)arg1;	// IMP=0x00000000002a4940
- (id)previousMarkerForCharacterOffset:(struct CharacterOffset *)arg1;	// IMP=0x00000000002a48b0
- (id)nextMarkerForCharacterOffset:(struct CharacterOffset *)arg1;	// IMP=0x00000000002a4820
- (id)textMarkerForPoint:(struct CGPoint)arg1;	// IMP=0x00000000002a4760
- (id)textRectsFromMarkers:(id)arg1 withText:(id)arg2;	// IMP=0x00000000002a4470
- (id)lineRectsForTextMarkerRange:(id)arg1;	// IMP=0x00000000002a4050
- (id)textMarkerRangeFromMarkers:(id)arg1 withText:(id)arg2;	// IMP=0x00000000002a3f10
- (optional_8a7f6590)rangeFromMarkers:(id)arg1 withText:(id)arg2;	// IMP=0x00000000002a3d30
- (struct CGRect)frameForTextMarkers:(id)arg1;	// IMP=0x00000000002a3bb0
- (struct CGRect)frameForRange:(struct _NSRange)arg1;	// IMP=0x00000000002a39e0
- (id)previousMarkerForMarker:(id)arg1;	// IMP=0x00000000002a3970
- (id)nextMarkerForMarker:(id)arg1;	// IMP=0x00000000002a3900
- (id)misspellingTextMarkerRange:(id)arg1 forward:(_Bool)arg2;	// IMP=0x00000000002a36e0
- (id)lineStartMarkerForMarker:(id)arg1;	// IMP=0x00000000002a3530
- (id)lineMarkersForMarker:(id)arg1;	// IMP=0x00000000002a32a0
- (id)lineEndMarkerForMarker:(id)arg1;	// IMP=0x00000000002a30f0
- (id)selectedTextMarker;	// IMP=0x00000000002a2f10
- (id)selectionRangeString;	// IMP=0x00000000002a2ed0
- (id)elementsForRange:(struct _NSRange)arg1;	// IMP=0x00000000002a2cb0
- (_Bool)accessibilityInsertText:(id)arg1;	// IMP=0x00000000002a2bf0
- (_Bool)accessibilityReplaceRange:(struct _NSRange)arg1 withText:(id)arg2;	// IMP=0x00000000002a2b10
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;	// IMP=0x00000000002a2ab0
- (struct _NSRange)_accessibilitySelectedTextRange;	// IMP=0x00000000002a2a20
- (id)attributedStringForElement;	// IMP=0x00000000002a2980
- (id)attributedStringForRange:(struct _NSRange)arg1;	// IMP=0x00000000002a2960
- (id)stringForRange:(struct _NSRange)arg1;	// IMP=0x00000000002a27a0
- (id)_stringForRange:(struct _NSRange)arg1 attributed:(_Bool)arg2;	// IMP=0x00000000002a2680
- (id)_stringFromStartMarker:(id)arg1 toEndMarker:(id)arg2 attributed:(_Bool)arg3;	// IMP=0x00000000002a2370
- (id)textMarkerForPosition:(long long)arg1;	// IMP=0x00000000002a21d0
- (id)textMarkerRangeForSelection;	// IMP=0x00000000002a1fd0
- (id)accessibilityObjectForTextMarker:(id)arg1;	// IMP=0x00000000002a1ec0
- (struct _NSRange)elementTextRange;	// IMP=0x00000000002a1e00
- (id)textMarkerRange;	// IMP=0x00000000002a1ce0
- (long long)positionForTextMarker:(id)arg1;	// IMP=0x00000000002a1aa0
- (id)arrayOfTextForTextMarkers:(id)arg1 attributed:(_Bool)arg2;	// IMP=0x00000000002a16b0
- (id)stringForTextMarkers:(id)arg1;	// IMP=0x00000000002a1430
- (void)_accessibilitySetValue:(id)arg1;	// IMP=0x00000000002a1380
- (void)accessibilityDecrement;	// IMP=0x00000000002a1330
- (void)accessibilityIncrement;	// IMP=0x00000000002a12e0
- (void)accessibilityMoveSelectionToMarker:(id)arg1;	// IMP=0x00000000002a11c0
- (void)accessibilityDecreaseSelection:(unsigned char)arg1;	// IMP=0x00000000002a11a0
- (_Bool)_accessibilityIsFocusedForTesting;	// IMP=0x00000000002a1160
- (void)_accessibilitySetFocus:(_Bool)arg1;	// IMP=0x00000000002a1120
- (void)accessibilityIncreaseSelection:(unsigned char)arg1;	// IMP=0x00000000002a1100
- (void)accessibilityModifySelection:(unsigned char)arg1 increase:(_Bool)arg2;	// IMP=0x00000000002a0d60
- (id)accessibilityFindMatchingObjects:(id)arg1;	// IMP=0x00000000002a0bb0
- (void *)treeItemParentForObject:(void *)arg1;	// IMP=0x00000000002a0b60
- (void *)detailParentForObject:(void *)arg1;	// IMP=0x00000000002a0ae0
- (void *)detailParentForSummaryObject:(void *)arg1;	// IMP=0x00000000002a0a50
- (struct CGRect)_accessibilityScrollVisibleRect;	// IMP=0x00000000002a0950
- (struct CGSize)_accessibilityScrollSize;	// IMP=0x00000000002a0880
- (struct CGPoint)_accessibilityScrollPosition;	// IMP=0x00000000002a07b0
- (void)postNotification:(id)arg1;	// IMP=0x00000000002a07a0
- (id)_accessibilityParentForSubview:(id)arg1;	// IMP=0x00000000002a06c0
- (id)attachmentView;	// IMP=0x00000000002a0670
- (_Bool)_accessibilityActivate;	// IMP=0x00000000002a0620
- (_Bool)accessibilityPerformEscape;	// IMP=0x00000000002a05d0
- (id)accessibilityTextualContext;	// IMP=0x00000000002a0540
- (_Bool)isAttachment;	// IMP=0x00000000002a04f0
- (id)accessibilityLinkedElement;	// IMP=0x00000000002a0350
- (id)accessibilityErrorMessageElements;	// IMP=0x00000000002a01c0
- (id)accessibilityDetailsElements;	// IMP=0x00000000002a00c0
- (id)accessibilityFlowToElements;	// IMP=0x000000000029ff00
- (_Bool)accessibilityRequired;	// IMP=0x000000000029feb0
- (id)accessibilityLinkRelationshipType;	// IMP=0x000000000029fdf0
- (id)accessibilityImageOverlayElements;	// IMP=0x000000000029fb30
- (id)_accessibilityPhotoDescription;	// IMP=0x000000000029fa70
- (_Bool)accessibilityCanSetValue;	// IMP=0x000000000029fa20
- (id)_accessibilityResolvedEditingStyles;	// IMP=0x000000000029f9e0
- (id)_accessibilityPreviousElementsWithCount:(unsigned int)arg1;	// IMP=0x000000000029f980
- (id)_accessibilityNextElementsWithCount:(unsigned int)arg1;	// IMP=0x000000000029f920
- (id)_accessibilityWebDocumentView;	// IMP=0x000000000029f840
- (id)accessibilityFocusedUIElement;	// IMP=0x000000000029f7f0
- (id)accessibilityContainer;	// IMP=0x000000000029f5a0
- (_Bool)containsUnnaturallySegmentedChildren;	// IMP=0x000000000029f490
- (struct CGRect)accessibilityFrame;	// IMP=0x000000000029f230
- (struct CGPoint)accessibilityActivationPoint;	// IMP=0x000000000029f1c0
- (struct CGRect)accessibilityVisibleContentRect;	// IMP=0x000000000029f120
- (struct CGRect)accessibilityElementRect;	// IMP=0x000000000029f090
- (struct CGRect)_accessibilityRelativeFrame;	// IMP=0x000000000029ee60
- (_Bool)accessibilityScroll:(long long)arg1;	// IMP=0x000000000029ecd0
- (_Bool)_accessibilityScrollToVisible;	// IMP=0x000000000029ec90
- (struct CGPoint)_accessibilityConvertPointToViewSpace:(struct CGPoint)arg1;	// IMP=0x000000000029ebf0
- (id)accessibilityURL;	// IMP=0x000000000029eb30
- (id)accessibilityHint;	// IMP=0x000000000029e900
- (_Bool)accessibilityIsComboBox;	// IMP=0x000000000029e8b0
- (_Bool)accessibilityIsAttachmentElement;	// IMP=0x000000000029e860
- (_Bool)accessibilityIsIndeterminate;	// IMP=0x000000000029e810
- (id)accessibilityValue;	// IMP=0x000000000029e2f0
- (id)accessibilityColorStringValue;	// IMP=0x000000000029e1e0
- (id)accessibilityPlaceholderValue;	// IMP=0x000000000029e120
- (id)accessibilityDatetimeValue;	// IMP=0x000000000029e020
- (unsigned long long)accessibilityBlockquoteLevel;	// IMP=0x000000000029dfd0
- (struct _NSRange)accessibilityColumnRange;	// IMP=0x000000000029df70
- (struct _NSRange)accessibilityRowRange;	// IMP=0x000000000029ddc0
- (unsigned long long)accessibilityARIAColumnIndex;	// IMP=0x000000000029dd60
- (unsigned long long)accessibilityARIARowIndex;	// IMP=0x000000000029dd00
- (unsigned long long)accessibilityARIAColumnCount;	// IMP=0x000000000029dcb0
- (unsigned long long)accessibilityARIARowCount;	// IMP=0x000000000029dc60
- (unsigned long long)accessibilityColumnCount;	// IMP=0x000000000029dc10
- (unsigned long long)accessibilityRowCount;	// IMP=0x000000000029dbc0
- (id)accessibilityElementForRow:(long long)arg1 andColumn:(long long)arg2;	// IMP=0x000000000029db50
- (id)accessibilityHeaderElements;	// IMP=0x000000000029d7d0
- (id)accessibilityTitleElement;	// IMP=0x000000000029d780
- (void *)tableParent;	// IMP=0x000000000029d720
- (void *)tableCellParent;	// IMP=0x000000000029d6d0
- (id)accessibilityLabel;	// IMP=0x000000000029d060
- (id)accessibilityBrailleRoleDescription;	// IMP=0x000000000029cfa0
- (id)accessibilityBrailleLabel;	// IMP=0x000000000029cee0
- (id)accessibilityRoleDescription;	// IMP=0x000000000029cdb0
- (double)_accessibilityMaxValue;	// IMP=0x000000000029cd60
- (double)_accessibilityMinValue;	// IMP=0x000000000029cd10
- (_Bool)_accessibilityIsStrongPasswordField;	// IMP=0x000000000029cca0
- (_Bool)_accessibilityHasTouchEventListener;	// IMP=0x000000000029cc50
- (_Bool)stringValueShouldBeUsedInLabel;	// IMP=0x000000000029cb90
- (_Bool)isAccessibilityElement;	// IMP=0x000000000029cb30
- (_Bool)determineIsAccessibilityElement;	// IMP=0x000000000029c5f0
- (_Bool)isSVGGroupElement;	// IMP=0x000000000029c570
- (unsigned long long)accessibilityTraits;	// IMP=0x000000000029c0d0
- (unsigned long long)_accessibilityTextEntryTraits;	// IMP=0x000000000029bff0
- (void)accessibilityVideoEnterFullscreen;	// IMP=0x000000000029bf00
- (void)accessibilityToggleMuteForMedia;	// IMP=0x000000000029be30
- (_Bool)accessibilityIsMediaMuted;	// IMP=0x000000000029bd70
- (_Bool)accessibilityIsMediaPlaying;	// IMP=0x000000000029bcb0
- (id)interactiveVideoDescription;	// IMP=0x000000000029bb80
- (_Bool)accessibilityIsWebInteractiveVideo;	// IMP=0x000000000029ba40
- (unsigned long long)_accessibilityTraitsFromAncestors;	// IMP=0x000000000029b8b0
- (id)_accessibilityFrameAncestor;	// IMP=0x000000000029b700
- (id)_accessibilityFieldsetAncestor;	// IMP=0x000000000029b670
- (id)_accessibilityTableAncestor;	// IMP=0x000000000029b460
- (id)_accessibilityLandmarkAncestor;	// IMP=0x000000000029b1c0
- (id)_accessibilityArticleAncestor;	// IMP=0x000000000029b010
- (id)_accessibilityListAncestor;	// IMP=0x000000000029ae20
- (id)_accessibilityDescriptionListAncestor;	// IMP=0x000000000029ac70
- (id)_accessibilityTreeAncestor;	// IMP=0x000000000029aac0
- (_Bool)_accessibilityIsLandmarkRole:(int)arg1;	// IMP=0x000000000029aa90
- (_Bool)accessibilityIsDialog;	// IMP=0x000000000029aa40
- (id)accessibilityLanguage;	// IMP=0x000000000029a980
- (_Bool)accessibilityIsRequired;	// IMP=0x000000000029a930
- (_Bool)accessibilityIsAttributeSettable:(id)arg1;	// IMP=0x000000000029a8d0
- (_Bool)_accessibilityIsInTableCell;	// IMP=0x000000000029a880
- (_Bool)accessibilityIsInDescriptionListTerm;	// IMP=0x000000000029a830
- (_Bool)accessibilityIsInDescriptionListDefinition;	// IMP=0x000000000029a7e0
- (_Bool)accessibilityHasWebApplicationAncestor;	// IMP=0x000000000029a790
- (_Bool)accessibilityHasDocumentRoleAncestor;	// IMP=0x000000000029a740
- (id)accessibilityPopupValue;	// IMP=0x000000000029a680
- (_Bool)accessibilityHasPopup;	// IMP=0x000000000029a630
- (id)_accessibilityWebRoleAsString;	// IMP=0x000000000029a540
- (struct CGPath *)_accessibilityPath;	// IMP=0x000000000029a450
- (long long)indexOfAccessibilityElement:(id)arg1;	// IMP=0x000000000029a330
- (id)accessibilityElementAtIndex:(long long)arg1;	// IMP=0x000000000029a260
- (long long)accessibilityElementCount;	// IMP=0x000000000029a1d0
- (id)accessibilityElements;	// IMP=0x0000000000299ec0
- (void)disableAttributeCaching;	// IMP=0x0000000000299e60
- (void)enableAttributeCaching;	// IMP=0x0000000000299df0
- (id)accessibilityHitTest:(struct CGPoint)arg1;	// IMP=0x00000000002999d0
- (id)accessibilityPostProcessHitTest:(struct CGPoint)arg1;	// IMP=0x00000000002999c0
- (_Bool)accessibilityCanFuzzyHitTest;	// IMP=0x0000000000299730
- (id)accessibilityDOMIdentifier;	// IMP=0x0000000000299670
- (unsigned long long)_axUpdatesFrequentlyTrait;	// IMP=0x0000000000299660
- (unsigned long long)_axTextAreaTrait;	// IMP=0x0000000000299650
- (unsigned long long)_axSearchFieldTrait;	// IMP=0x0000000000299640
- (unsigned long long)_axContainedByFieldsetTrait;	// IMP=0x0000000000299630
- (unsigned long long)_axRadioButtonTrait;	// IMP=0x0000000000299620
- (unsigned long long)_axNotEnabledTrait;	// IMP=0x0000000000299610
- (unsigned long long)_axSelectedTrait;	// IMP=0x0000000000299600
- (unsigned long long)_axMenuItemTrait;	// IMP=0x00000000002995f0
- (unsigned long long)_axAdjustableTrait;	// IMP=0x00000000002995e0
- (unsigned long long)_axStaticTextTrait;	// IMP=0x00000000002995d0
- (unsigned long long)_axPopupButtonTrait;	// IMP=0x00000000002995c0
- (unsigned long long)_axToggleTrait;	// IMP=0x00000000002995b0
- (unsigned long long)_axButtonTrait;	// IMP=0x00000000002995a0
- (unsigned long long)_axTabButtonTrait;	// IMP=0x0000000000299590
- (unsigned long long)_axImageTrait;	// IMP=0x0000000000299580
- (unsigned long long)_axTextOperationsAvailableTrait;	// IMP=0x0000000000299570
- (unsigned long long)_axHasTextCursorTrait;	// IMP=0x0000000000299560
- (unsigned long long)_axTextEntryTrait;	// IMP=0x0000000000299550
- (unsigned long long)_axSecureTextFieldTrait;	// IMP=0x0000000000299540
- (unsigned long long)_axWebContentTrait;	// IMP=0x0000000000299530
- (unsigned long long)_axContainedByLandmarkTrait;	// IMP=0x0000000000299520
- (unsigned long long)_axContainedByTableTrait;	// IMP=0x0000000000299510
- (unsigned long long)_axContainedByListTrait;	// IMP=0x0000000000299500
- (unsigned long long)_axHeaderTrait;	// IMP=0x00000000002994f0
- (unsigned long long)_axVisitedTrait;	// IMP=0x00000000002994e0
- (unsigned long long)_axLinkTrait;	// IMP=0x00000000002994d0
- (void)dealloc;	// IMP=0x00000000002994a0
- (void)detach;	// IMP=0x0000000000299440
- (void *)axBackingObject;	// IMP=0x0000000000299430
- (id)initWithAccessibilityObject:(void *)arg1;	// IMP=0x00000000002993e0

@end

