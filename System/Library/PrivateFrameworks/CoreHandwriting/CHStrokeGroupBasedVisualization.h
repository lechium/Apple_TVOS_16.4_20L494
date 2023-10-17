//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHRecognitionSessionResult, NSSet;
@protocol CHStrokeGroupBasedVisualizationDelegate;

@interface CHStrokeGroupBasedVisualization
{
    _Bool _newGroupsDefaultToActive;	// 8 = 0x8
    CHRecognitionSessionResult *_resultDrawn;	// 16 = 0x10
    NSSet *_activeStrokeGroupAncestorIdentifiers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010cdc0
@property(readonly, nonatomic) _Bool newGroupsDefaultToActive; // @synthesize newGroupsDefaultToActive=_newGroupsDefaultToActive;
@property(copy, nonatomic) NSSet *activeStrokeGroupAncestorIdentifiers; // @synthesize activeStrokeGroupAncestorIdentifiers=_activeStrokeGroupAncestorIdentifiers;
@property(retain, nonatomic) CHRecognitionSessionResult *resultDrawn; // @synthesize resultDrawn=_resultDrawn;
- (void)_markStrokeGroupsAsActive:(id)arg1;	// IMP=0x000000000010ca90
- (void)toggleVisualizationRegionAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000010c570
- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;	// IMP=0x000000000010c430
- (void)recognitionSessionDidUpdateRecognitionResult;	// IMP=0x000000000010bf30
- (struct CGRect)dirtyRectForStrokeGroup:(id)arg1;	// IMP=0x000000000010bef0

// Remaining properties
@property(nonatomic) __weak id <CHStrokeGroupBasedVisualizationDelegate> delegate; // @dynamic delegate;

@end

