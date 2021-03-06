#pragma once
/*-------------------------------------------------------------------------
 * This source code is confidential proprietary information which is
 * Copyright (c) 2017 by Great Hill Corporation.
 * All Rights Reserved
 *
 * The LICENSE at the root of this repo details your rights (if any)
 *------------------------------------------------------------------------*/
/*
 * This file was generated with makeClass. Edit only those parts of the code inside
 * of 'EXISTING_CODE' tags.
 */
#include "logentry.h"

//--------------------------------------------------------------------------
class QTransferEvent;
typedef SFArrayBase<QTransferEvent>         QTransferEventArray;
typedef SFList<QTransferEvent*>             QTransferEventList;
typedef SFUniqueList<QTransferEvent*>       QTransferEventListU;

// EXISTING_CODE
// EXISTING_CODE

//--------------------------------------------------------------------------
class QTransferEvent : public CLogEntry {
public:
    SFAddress _from;
    SFAddress _to;
    SFUintBN _value;

public:
    QTransferEvent(void);
    QTransferEvent(const QTransferEvent& tr);
    virtual ~QTransferEvent(void);
    QTransferEvent& operator=(const QTransferEvent& tr);

    DECLARE_NODE(QTransferEvent);

    // EXISTING_CODE
    // EXISTING_CODE
    friend ostream& operator<<(ostream& os, const QTransferEvent& item);

protected:
    void Clear(void);
    void Init(void);
    void Copy(const QTransferEvent& tr);
    bool readBackLevel(SFArchive& archive) override;

    // EXISTING_CODE
    // EXISTING_CODE
};

//--------------------------------------------------------------------------
inline QTransferEvent::QTransferEvent(void) {
    Init();
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline QTransferEvent::QTransferEvent(const QTransferEvent& tr) {
    // EXISTING_CODE
    // EXISTING_CODE
    Copy(tr);
}

// EXISTING_CODE
// EXISTING_CODE

//--------------------------------------------------------------------------
inline QTransferEvent::~QTransferEvent(void) {
    Clear();
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void QTransferEvent::Clear(void) {
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void QTransferEvent::Init(void) {
    CLogEntry::Init();

    _from = "";
    _to = "";
    _value = 0;

    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void QTransferEvent::Copy(const QTransferEvent& tr) {
    Clear();
    CLogEntry::Copy(tr);

    _from = tr._from;
    _to = tr._to;
    _value = tr._value;

    // EXISTING_CODE
    // EXISTING_CODE
    finishParse();
}

//--------------------------------------------------------------------------
inline QTransferEvent& QTransferEvent::operator=(const QTransferEvent& tr) {
    Copy(tr);
    // EXISTING_CODE
    // EXISTING_CODE
    return *this;
}

//---------------------------------------------------------------------------
IMPLEMENT_ARCHIVE_ARRAY(QTransferEventArray);
IMPLEMENT_ARCHIVE_ARRAY_C(QTransferEventArray);
IMPLEMENT_ARCHIVE_LIST(QTransferEventList);

//---------------------------------------------------------------------------
// EXISTING_CODE
// EXISTING_CODE

