//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _UISEGestureFeatureSettings;

__attribute__((visibility("hidden")))
@interface _UISEBackProjectEdgesFailGestureFeature
{
    id <_UISEGestureFeatureSettings> _settings;	// 8 = 0x8
    _Bool _hasDoneTest;	// 16 = 0x10
    struct CGPoint _initialLocation;	// 24 = 0x18
    double _initialTimestamp;	// 40 = 0x28
    unsigned long long _touchedEdges;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000006f0583
@property(readonly, nonatomic) unsigned long long touchedEdges; // @synthesize touchedEdges=_touchedEdges;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;	// IMP=0x00000000006f0370
- (id)debugDictionary;	// IMP=0x00000000006f02c1
- (id)initWithSettings:(id)arg1;	// IMP=0x00000000006f022b

@end
