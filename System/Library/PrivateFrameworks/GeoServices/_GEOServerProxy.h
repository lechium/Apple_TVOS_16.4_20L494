//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOServer;

__attribute__((visibility("hidden")))
@interface _GEOServerProxy : NSObject
{
    Class _serverClass;	// 8 = 0x8
    GEOServer *_server;	// 16 = 0x10
}

+ (id)proxyForServer:(id)arg1 daemon:(id)arg2;	// IMP=0x00600000013faf77
+ (id)proxyForClass:(Class)arg1;	// IMP=0x00600000013faf21
- (void).cxx_destruct;	// IMP=0x00000000013fb2ef
@property(readonly, nonatomic) GEOServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) Class serverClass; // @synthesize serverClass=_serverClass;
- (id)description;	// IMP=0x00000000013fb26d
- (unsigned long long)hash;	// IMP=0x00000000013fb257
- (_Bool)isEqualToServerProxy:(id)arg1;	// IMP=0x00000000013fb246
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000013fb1ed
- (void)startServerWithDaemon:(id)arg1;	// IMP=0x00000000013fb028
- (void)_setServer:(id)arg1;	// IMP=0x00000000013fb017

@end

