//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMError, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MCMResultWithURLBase
{
    _Bool _existed;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
    const char *_sandboxToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000b64f4
@property(readonly, nonatomic) _Bool existed; // @synthesize existed=_existed;
@property(readonly, nonatomic) const char *sandboxToken; // @synthesize sandboxToken=_sandboxToken;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)dealloc;	// IMP=0x00000000000b6381
- (id)initWithPath:(id)arg1 existed:(_Bool)arg2 sandboxToken:(const char *)arg3;	// IMP=0x00000000000b62b6
- (id)initWithURL:(id)arg1 existed:(_Bool)arg2 sandboxToken:(const char *)arg3;	// IMP=0x00000000000b61f5
- (_Bool)encodeResultOntoReply:(id)arg1;	// IMP=0x00000000000b6052

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) MCMError *error; // @dynamic error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

