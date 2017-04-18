#include <memory>
#include "canrawsender.h"
#include "canrawsender_p.h"

CanRawSender::CanRawSender(QWidget *parent) :
    QWidget(parent),
    d_ptr(new CanRawSenderPrivate)
{
    Q_D(CanRawSender);

    d->setupUi();
    setLayout(d->layout.get());
}

CanRawSender::~CanRawSender()
{

}
