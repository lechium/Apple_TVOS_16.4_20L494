//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryLoginOperation
{
    unsigned int _sessionIdentifier;	// 8 = 0x8
}

@property(nonatomic) unsigned int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void)_handleResponse:(id)arg1;	// IMP=0x000000000001f93a
- (id)initWithSessionState:(id)arg1 requestSession:(id)arg2;	// IMP=0x000000000001f7f1
- (id)initWithRequest:(id)arg1 requestSession:(id)arg2;	// IMP=0x000000000001f782

@end

