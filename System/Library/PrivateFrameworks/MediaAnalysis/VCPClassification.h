//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCPClassification : NSObject
{
    float _duration;	// 8 = 0x8
    float _sumConfidence;	// 12 = 0xc
    NSString *_sceneId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005eff3
@property float sumConfidence; // @synthesize sumConfidence=_sumConfidence;
@property float duration; // @synthesize duration=_duration;
@property(retain) NSString *sceneId; // @synthesize sceneId=_sceneId;
- (id)initWithSceneId:(id)arg1 withDuration:(float)arg2 withConfidence:(float)arg3;	// IMP=0x000000000005eee0

@end

