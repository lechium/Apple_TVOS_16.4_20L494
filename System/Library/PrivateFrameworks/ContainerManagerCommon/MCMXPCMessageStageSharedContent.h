//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MCMXPCMessageStageSharedContent
{
    NSString *_sourceRelativePath;	// 8 = 0x8
    NSString *_destinationRelativePath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000053357
@property(readonly, nonatomic) NSString *destinationRelativePath; // @synthesize destinationRelativePath=_destinationRelativePath;
@property(readonly, nonatomic) NSString *sourceRelativePath; // @synthesize sourceRelativePath=_sourceRelativePath;
- (unsigned int)disposition;	// IMP=0x0000000000053256
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000053154

// Remaining properties
@property(readonly, nonatomic) NSString *identifier;

@end

