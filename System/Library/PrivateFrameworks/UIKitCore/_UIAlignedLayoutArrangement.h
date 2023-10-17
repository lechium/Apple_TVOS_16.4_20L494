//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIAlignedLayoutArrangement
{
    NSMutableDictionary *_alignmentConstraints;	// 8 = 0x8
    unsigned long long _alignment;	// 16 = 0x10
}

+ (Class)_configurationHistoryClass;	// IMP=0x001000000108e81a
- (void).cxx_destruct;	// IMP=0x00000000010925fc
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
- (void)_clearAllConstraintsArrays;	// IMP=0x00000000010924a2
- (void)_updateArrangementConstraints;	// IMP=0x00000000010923cb
- (void)_addConstraintGroupsAsNecessary;	// IMP=0x0000000001091dcb
- (void)_addIndividualConstraintsIfPossible;	// IMP=0x00000000010913cb
- (void)_setUpConstraintForItem:(id)arg1 referenceItem:(id)arg2 attribute:(long long)arg3 inConstraintsTable:(id)arg4;	// IMP=0x0000000001091228
- (long long)_attributeForConstraintGroupName:(id)arg1;	// IMP=0x0000000001091044
- (void)_removeIndividualConstraintsAsNecessary;	// IMP=0x0000000001090a1f
- (void)_removeConstraintGroupsAsNecessary;	// IMP=0x000000000108f7ac
- (_Bool)_wantsConstraintsForAttribute:(long long)arg1;	// IMP=0x000000000108f673
- (_Bool)_wantsAmbiguitySuppressionConstraints;	// IMP=0x000000000108f627
- (_Bool)_wantsConstraintsUsingAttributesForAxis:(long long)arg1;	// IMP=0x000000000108f5d3
- (id)_baselineDependentConstraints;	// IMP=0x000000000108f27c
- (_Bool)_requiresNotificationForHasBaselinePropertyChanges;	// IMP=0x000000000108f225
- (void)_updateConfigurationHistory;	// IMP=0x000000000108f162
- (_Bool)_hasStaleConfiguration;	// IMP=0x000000000108f098
- (id)_alignmentPropertySource;	// IMP=0x000000000108f086
- (id)_alignmentConfigurationHistory;	// IMP=0x000000000108f074
- (_Bool)_canvasConnectionConstraintsNeedUpdatePass;	// IMP=0x000000000108edd7
- (_Bool)_usesCenteringConnectionConstraint;	// IMP=0x000000000108ed8c
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1;	// IMP=0x000000000108ecdd
- (_Bool)_spanningGuideConstraintsNeedUpdate;	// IMP=0x000000000108ec2c
- (_Bool)_usesInequalitySpanningConstraintForAttribute:(long long)arg1;	// IMP=0x000000000108eb6c
- (long long)_axisForSpanningLayoutGuide;	// IMP=0x000000000108eb25
- (id)_identifierForSpanningLayoutGuide;	// IMP=0x000000000108eb18
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1;	// IMP=0x000000000108e8d9
@property(nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling;
@property(nonatomic) _Bool layoutFillsCanvas;
@property(nonatomic) long long axis;
- (id)initWithItems:(id)arg1;	// IMP=0x000000000108e82b
- (void)dealloc;	// IMP=0x000000000108e6ac

// Remaining properties
@property(readonly, nonatomic) NSSet *_newlyHiddenItems;
@property(readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property(readonly) Class superclass;

@end
