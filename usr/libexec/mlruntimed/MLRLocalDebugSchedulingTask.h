//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSURL;

@interface MLRLocalDebugSchedulingTask
{
    NSURL *_recipePath;	// 8 = 0x8
    NSArray *_recordUUIDs;	// 16 = 0x10
    NSArray *_attachments;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000bab7
@property(readonly, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(readonly, nonatomic) NSArray *recordUUIDs; // @synthesize recordUUIDs=_recordUUIDs;
@property(readonly, nonatomic) NSURL *recipePath; // @synthesize recipePath=_recipePath;
- (MISSING_TYPE *)description;	// IMP=0x001000000000b938
- (id)initWithBundleIdentifier:(id)arg1 taskSource:(long long)arg2 maxTimeLimit:(double)arg3;	// IMP=0x001000000000b90f
- (id)initWithBundleIdentifier:(id)arg1 taskSource:(long long)arg2 maxTimeLimit:(double)arg3 recipePath:(id)arg4 recordUUIDs:(id)arg5 attachments:(id)arg6;	// IMP=0x001000000000b827

@end

