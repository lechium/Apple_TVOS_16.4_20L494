//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class C2MPError, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface C2MPNetworkEvent : PBCodable
{
    unsigned long long _networkRequestBodyBytesSent;	// 8 = 0x8
    unsigned long long _networkResponseBodyBytesReceived;	// 16 = 0x10
    unsigned long long _networkStatusCode;	// 24 = 0x18
    unsigned long long _reportFrequency;	// 32 = 0x20
    unsigned long long _reportFrequencyBase;	// 40 = 0x28
    unsigned long long _timestampC2Init;	// 48 = 0x30
    unsigned long long _timestampC2Now;	// 56 = 0x38
    unsigned long long _timestampC2Start;	// 64 = 0x40
    unsigned long long _timestampDnsEnd;	// 72 = 0x48
    unsigned long long _timestampDnsStart;	// 80 = 0x50
    unsigned long long _timestampRequestEnd;	// 88 = 0x58
    unsigned long long _timestampRequestStart;	// 96 = 0x60
    unsigned long long _timestampResponseEnd;	// 104 = 0x68
    unsigned long long _timestampResponseStart;	// 112 = 0x70
    unsigned long long _timestampSslStart;	// 120 = 0x78
    unsigned long long _timestampTcpEnd;	// 128 = 0x80
    unsigned long long _timestampTcpStart;	// 136 = 0x88
    unsigned long long _triggers;	// 144 = 0x90
    NSString *_networkConnectionUuid;	// 152 = 0x98
    C2MPError *_networkFatalError;	// 160 = 0xa0
    NSString *_networkHostname;	// 168 = 0xa8
    NSString *_networkInterfaceIdentifier;	// 176 = 0xb0
    NSString *_networkNegotiatedTlsProtocolVersion;	// 184 = 0xb8
    NSMutableArray *_networkPathInfos;	// 192 = 0xc0
    unsigned int _networkPreviousAttemptCount;	// 200 = 0xc8
    NSString *_networkProtocolName;	// 208 = 0xd0
    NSString *_networkRemoteAddresssAndPort;	// 216 = 0xd8
    unsigned int _networkRequestHeaderSize;	// 224 = 0xe0
    NSString *_networkRequestUri;	// 232 = 0xe8
    unsigned int _networkResponseHeaderSize;	// 240 = 0xf0
    NSString *_networkTaskDescription;	// 248 = 0xf8
    NSString *_optionsDiscretionaryNetworkBehavior;	// 256 = 0x100
    NSString *_optionsDuetPreClearedMode;	// 264 = 0x108
    NSString *_optionsQualityOfService;	// 272 = 0x110
    NSString *_optionsSourceApplicationBundleIdentifier;	// 280 = 0x118
    NSString *_optionsSourceApplicationSecondaryIdentifier;	// 288 = 0x120
    unsigned int _optionsTimeoutIntervalForRequest;	// 296 = 0x128
    unsigned int _optionsTimeoutIntervalForResource;	// 300 = 0x12c
    _Bool _networkConnectionReused;	// 304 = 0x130
    _Bool _networkIsDiscretionary;	// 305 = 0x131
    _Bool _optionsAllowCellularAccess;	// 306 = 0x132
    _Bool _optionsAllowExpensiveAccess;	// 307 = 0x133
    _Bool _optionsAllowPowerNapScheduling;	// 308 = 0x134
    _Bool _optionsAppleIdContext;	// 309 = 0x135
    _Bool _optionsOutOfProcess;	// 310 = 0x136
    _Bool _optionsOutOfProcessForceDiscretionary;	// 311 = 0x137
    _Bool _optionsTlsPinningRequired;	// 312 = 0x138
    struct {
        unsigned int networkRequestBodyBytesSent:1;
        unsigned int networkResponseBodyBytesReceived:1;
        unsigned int networkStatusCode:1;
        unsigned int reportFrequency:1;
        unsigned int reportFrequencyBase:1;
        unsigned int timestampC2Init:1;
        unsigned int timestampC2Now:1;
        unsigned int timestampC2Start:1;
        unsigned int timestampDnsEnd:1;
        unsigned int timestampDnsStart:1;
        unsigned int timestampRequestEnd:1;
        unsigned int timestampRequestStart:1;
        unsigned int timestampResponseEnd:1;
        unsigned int timestampResponseStart:1;
        unsigned int timestampSslStart:1;
        unsigned int timestampTcpEnd:1;
        unsigned int timestampTcpStart:1;
        unsigned int triggers:1;
        unsigned int networkPreviousAttemptCount:1;
        unsigned int networkRequestHeaderSize:1;
        unsigned int networkResponseHeaderSize:1;
        unsigned int optionsTimeoutIntervalForRequest:1;
        unsigned int optionsTimeoutIntervalForResource:1;
        unsigned int networkConnectionReused:1;
        unsigned int networkIsDiscretionary:1;
        unsigned int optionsAllowCellularAccess:1;
        unsigned int optionsAllowExpensiveAccess:1;
        unsigned int optionsAllowPowerNapScheduling:1;
        unsigned int optionsAppleIdContext:1;
        unsigned int optionsOutOfProcess:1;
        unsigned int optionsOutOfProcessForceDiscretionary:1;
        unsigned int optionsTlsPinningRequired:1;
    } _has;	// 316 = 0x13c
}

+ (Class)networkPathInfoType;	// IMP=0x0010000000007b82
- (void).cxx_destruct;	// IMP=0x000000000000dc0e
@property(nonatomic) _Bool optionsAllowCellularAccess; // @synthesize optionsAllowCellularAccess=_optionsAllowCellularAccess;
@property(retain, nonatomic) NSString *optionsDuetPreClearedMode; // @synthesize optionsDuetPreClearedMode=_optionsDuetPreClearedMode;
@property(retain, nonatomic) NSString *optionsDiscretionaryNetworkBehavior; // @synthesize optionsDiscretionaryNetworkBehavior=_optionsDiscretionaryNetworkBehavior;
@property(nonatomic) _Bool optionsTlsPinningRequired; // @synthesize optionsTlsPinningRequired=_optionsTlsPinningRequired;
@property(nonatomic) _Bool optionsAppleIdContext; // @synthesize optionsAppleIdContext=_optionsAppleIdContext;
@property(retain, nonatomic) NSString *optionsSourceApplicationSecondaryIdentifier; // @synthesize optionsSourceApplicationSecondaryIdentifier=_optionsSourceApplicationSecondaryIdentifier;
@property(retain, nonatomic) NSString *optionsSourceApplicationBundleIdentifier; // @synthesize optionsSourceApplicationBundleIdentifier=_optionsSourceApplicationBundleIdentifier;
@property(nonatomic) unsigned int optionsTimeoutIntervalForResource; // @synthesize optionsTimeoutIntervalForResource=_optionsTimeoutIntervalForResource;
@property(nonatomic) unsigned int optionsTimeoutIntervalForRequest; // @synthesize optionsTimeoutIntervalForRequest=_optionsTimeoutIntervalForRequest;
@property(nonatomic) _Bool optionsAllowPowerNapScheduling; // @synthesize optionsAllowPowerNapScheduling=_optionsAllowPowerNapScheduling;
@property(nonatomic) _Bool optionsAllowExpensiveAccess; // @synthesize optionsAllowExpensiveAccess=_optionsAllowExpensiveAccess;
@property(nonatomic) _Bool optionsOutOfProcessForceDiscretionary; // @synthesize optionsOutOfProcessForceDiscretionary=_optionsOutOfProcessForceDiscretionary;
@property(nonatomic) _Bool optionsOutOfProcess; // @synthesize optionsOutOfProcess=_optionsOutOfProcess;
@property(retain, nonatomic) NSString *optionsQualityOfService; // @synthesize optionsQualityOfService=_optionsQualityOfService;
@property(nonatomic) unsigned long long timestampResponseEnd; // @synthesize timestampResponseEnd=_timestampResponseEnd;
@property(nonatomic) unsigned long long timestampResponseStart; // @synthesize timestampResponseStart=_timestampResponseStart;
@property(nonatomic) unsigned long long timestampRequestEnd; // @synthesize timestampRequestEnd=_timestampRequestEnd;
@property(nonatomic) unsigned long long timestampRequestStart; // @synthesize timestampRequestStart=_timestampRequestStart;
@property(nonatomic) unsigned long long timestampSslStart; // @synthesize timestampSslStart=_timestampSslStart;
@property(nonatomic) unsigned long long timestampTcpEnd; // @synthesize timestampTcpEnd=_timestampTcpEnd;
@property(nonatomic) unsigned long long timestampTcpStart; // @synthesize timestampTcpStart=_timestampTcpStart;
@property(nonatomic) unsigned long long timestampDnsEnd; // @synthesize timestampDnsEnd=_timestampDnsEnd;
@property(nonatomic) unsigned long long timestampDnsStart; // @synthesize timestampDnsStart=_timestampDnsStart;
@property(nonatomic) unsigned long long timestampC2Now; // @synthesize timestampC2Now=_timestampC2Now;
@property(nonatomic) unsigned long long timestampC2Start; // @synthesize timestampC2Start=_timestampC2Start;
@property(nonatomic) unsigned long long timestampC2Init; // @synthesize timestampC2Init=_timestampC2Init;
@property(retain, nonatomic) NSMutableArray *networkPathInfos; // @synthesize networkPathInfos=_networkPathInfos;
@property(retain, nonatomic) NSString *networkNegotiatedTlsProtocolVersion; // @synthesize networkNegotiatedTlsProtocolVersion=_networkNegotiatedTlsProtocolVersion;
@property(nonatomic) _Bool networkIsDiscretionary; // @synthesize networkIsDiscretionary=_networkIsDiscretionary;
@property(retain, nonatomic) NSString *networkRequestUri; // @synthesize networkRequestUri=_networkRequestUri;
@property(nonatomic) unsigned long long networkStatusCode; // @synthesize networkStatusCode=_networkStatusCode;
@property(retain, nonatomic) C2MPError *networkFatalError; // @synthesize networkFatalError=_networkFatalError;
@property(nonatomic) unsigned int networkPreviousAttemptCount; // @synthesize networkPreviousAttemptCount=_networkPreviousAttemptCount;
@property(nonatomic) unsigned long long networkResponseBodyBytesReceived; // @synthesize networkResponseBodyBytesReceived=_networkResponseBodyBytesReceived;
@property(nonatomic) unsigned int networkResponseHeaderSize; // @synthesize networkResponseHeaderSize=_networkResponseHeaderSize;
@property(nonatomic) unsigned long long networkRequestBodyBytesSent; // @synthesize networkRequestBodyBytesSent=_networkRequestBodyBytesSent;
@property(nonatomic) unsigned int networkRequestHeaderSize; // @synthesize networkRequestHeaderSize=_networkRequestHeaderSize;
@property(retain, nonatomic) NSString *networkProtocolName; // @synthesize networkProtocolName=_networkProtocolName;
@property(retain, nonatomic) NSString *networkInterfaceIdentifier; // @synthesize networkInterfaceIdentifier=_networkInterfaceIdentifier;
@property(nonatomic) _Bool networkConnectionReused; // @synthesize networkConnectionReused=_networkConnectionReused;
@property(retain, nonatomic) NSString *networkConnectionUuid; // @synthesize networkConnectionUuid=_networkConnectionUuid;
@property(retain, nonatomic) NSString *networkRemoteAddresssAndPort; // @synthesize networkRemoteAddresssAndPort=_networkRemoteAddresssAndPort;
@property(retain, nonatomic) NSString *networkHostname; // @synthesize networkHostname=_networkHostname;
@property(retain, nonatomic) NSString *networkTaskDescription; // @synthesize networkTaskDescription=_networkTaskDescription;
@property(nonatomic) unsigned long long reportFrequencyBase; // @synthesize reportFrequencyBase=_reportFrequencyBase;
@property(nonatomic) unsigned long long reportFrequency; // @synthesize reportFrequency=_reportFrequency;
@property(nonatomic) unsigned long long triggers; // @synthesize triggers=_triggers;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000cfc3
- (unsigned long long)hash;	// IMP=0x000000000000c86d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000be5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b634
- (void)copyTo:(id)arg1;	// IMP=0x000000000000aff4
- (void)writeTo:(id)arg1;	// IMP=0x000000000000a901
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000a8f4
- (id)dictionaryRepresentation;	// IMP=0x0000000000008319
- (id)description;	// IMP=0x000000000000826a
@property(nonatomic) _Bool hasOptionsAllowCellularAccess;
@property(readonly, nonatomic) _Bool hasOptionsDuetPreClearedMode;
@property(readonly, nonatomic) _Bool hasOptionsDiscretionaryNetworkBehavior;
@property(nonatomic) _Bool hasOptionsTlsPinningRequired;
@property(nonatomic) _Bool hasOptionsAppleIdContext;
@property(readonly, nonatomic) _Bool hasOptionsSourceApplicationSecondaryIdentifier;
@property(readonly, nonatomic) _Bool hasOptionsSourceApplicationBundleIdentifier;
@property(nonatomic) _Bool hasOptionsTimeoutIntervalForResource;
@property(nonatomic) _Bool hasOptionsTimeoutIntervalForRequest;
@property(nonatomic) _Bool hasOptionsAllowPowerNapScheduling;
@property(nonatomic) _Bool hasOptionsAllowExpensiveAccess;
@property(nonatomic) _Bool hasOptionsOutOfProcessForceDiscretionary;
@property(nonatomic) _Bool hasOptionsOutOfProcess;
@property(readonly, nonatomic) _Bool hasOptionsQualityOfService;
@property(nonatomic) _Bool hasTimestampResponseEnd;
@property(nonatomic) _Bool hasTimestampResponseStart;
@property(nonatomic) _Bool hasTimestampRequestEnd;
@property(nonatomic) _Bool hasTimestampRequestStart;
@property(nonatomic) _Bool hasTimestampSslStart;
@property(nonatomic) _Bool hasTimestampTcpEnd;
@property(nonatomic) _Bool hasTimestampTcpStart;
@property(nonatomic) _Bool hasTimestampDnsEnd;
@property(nonatomic) _Bool hasTimestampDnsStart;
@property(nonatomic) _Bool hasTimestampC2Now;
@property(nonatomic) _Bool hasTimestampC2Start;
@property(nonatomic) _Bool hasTimestampC2Init;
- (id)networkPathInfoAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000007b65
- (unsigned long long)networkPathInfosCount;	// IMP=0x0000000000007b48
- (void)addNetworkPathInfo:(id)arg1;	// IMP=0x0000000000007ade
- (void)clearNetworkPathInfos;	// IMP=0x0000000000007ac1
@property(readonly, nonatomic) _Bool hasNetworkNegotiatedTlsProtocolVersion;
@property(nonatomic) _Bool hasNetworkIsDiscretionary;
@property(readonly, nonatomic) _Bool hasNetworkRequestUri;
@property(nonatomic) _Bool hasNetworkStatusCode;
@property(readonly, nonatomic) _Bool hasNetworkFatalError;
@property(nonatomic) _Bool hasNetworkPreviousAttemptCount;
@property(nonatomic) _Bool hasNetworkResponseBodyBytesReceived;
@property(nonatomic) _Bool hasNetworkResponseHeaderSize;
@property(nonatomic) _Bool hasNetworkRequestBodyBytesSent;
@property(nonatomic) _Bool hasNetworkRequestHeaderSize;
@property(readonly, nonatomic) _Bool hasNetworkProtocolName;
@property(readonly, nonatomic) _Bool hasNetworkInterfaceIdentifier;
@property(nonatomic) _Bool hasNetworkConnectionReused;
@property(readonly, nonatomic) _Bool hasNetworkConnectionUuid;
@property(readonly, nonatomic) _Bool hasNetworkRemoteAddresssAndPort;
@property(readonly, nonatomic) _Bool hasNetworkHostname;
@property(readonly, nonatomic) _Bool hasNetworkTaskDescription;
@property(nonatomic) _Bool hasReportFrequencyBase;
@property(nonatomic) _Bool hasReportFrequency;
@property(nonatomic) _Bool hasTriggers;

@end

