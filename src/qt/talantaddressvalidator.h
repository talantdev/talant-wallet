#ifndef TALANTADDRESSVALIDATOR_H
#define TALANTADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator.
   Corrects near-miss characters and refuses characters that are not part of base58.
 */
class TalantAddressValidator : public QValidator
{
    Q_OBJECT

public:
    explicit TalantAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
};

#endif // TALANTADDRESSVALIDATOR_H
